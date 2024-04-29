$(document).ready(function() {
    //  datepicker for start date
    $('#startDate').datepicker({
      format: 'dd/mm/yyyy',
      autoclose: true
    });
  
    // datepickker for end date
    $('#endDate').datepicker({
      format: 'dd/mm/yyyy', 
      autoclose: true
    });
  
  // interval is calculated when button is clicked
    $('#calculate').click(function() {
      var startDate = $('#startDate').datepicker('getDate');
      var endDate = $('#endDate').datepicker('getDate');
  
      if (startDate && endDate) {
        var interval = endDate.getTime() - startDate.getTime(); 
        var intervalInYears = Math.floor(interval / (1000 * 60 * 60 * 24 * 365));
        var intervalInMonths = Math.floor(interval / (1000 * 60 * 60 * 24 * 30.4375));
        var intervalInWeeks = Math.floor(interval / (1000 * 60 * 60 * 24 * 7));
        var intervalInDays = Math.floor(interval / (1000 * 60 * 60 * 24));
  
        var result = "Interval: ";
        result += "Years: " + intervalInYears + ", ";
        result += "Months: " + intervalInMonths + ", ";
        result += "Weeks: " + intervalInWeeks + ", ";
        result += "Days: " + intervalInDays;
        
        $('#interval').text(result);
      } else {
        $('#interval').text('Please select both start and end dates.');
      }
    });
  });
  