/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICoordinateSpace;
#import <MobileSafari/MobileSafari-Structs.h>
@class BrowserController;

@interface BrowserWindowSourceInfo : NSObject {

	BrowserController* _browserController;
	id<UICoordinateSpace> _coordinateSpace;
	CGRect _frame;

}

@property (nonatomic,readonly) BrowserController * browserController;              //@synthesize browserController=_browserController - In the implementation block
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                       //@synthesize frame=_frame - In the implementation block
+(id)sourceInfoWithBrowserController:(id)arg1 frame:(CGRect)arg2 coordinateSpace:(id)arg3 ;
+(id)sourceInfoWithBrowserController:(id)arg1 ;
-(BrowserController *)browserController;
-(id)_initWithBrowserController:(id)arg1 frame:(CGRect)arg2 coordinateSpace:(id)arg3 ;
-(CGRect)frame;
-(id<UICoordinateSpace>)coordinateSpace;
@end

