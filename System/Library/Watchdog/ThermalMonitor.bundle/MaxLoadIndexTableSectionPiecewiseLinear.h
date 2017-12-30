/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:41:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/MaxLoadIndexTableSection.h>

@interface MaxLoadIndexTableSectionPiecewiseLinear : MaxLoadIndexTableSection {

	unsigned _controlEfforts[8];
	unsigned _maxLIs[8];
	unsigned _unconstrainedMaxLI;
	unsigned _pointCount;

}
-(id)initWithDecisionTreeSectionControlEfforts:(id)arg1 maxLIs:(id)arg2 unconstrainedMaxLI:(unsigned)arg3 ;
-(unsigned)maxLI:(unsigned)arg1 ;
@end

