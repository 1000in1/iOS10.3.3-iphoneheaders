/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UITargetedProxy.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy <UIAlertViewDelegate> {

	id _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)restrictedProxyForAlertView:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

