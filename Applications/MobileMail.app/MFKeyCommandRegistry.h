/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIResponder.h>

@class NSMutableSet;

@interface MFKeyCommandRegistry : UIResponder {

	NSMutableSet* _reactorSet;

}
+(id)globalRegistry;
-(void)registerReactorForKeyCommands:(UIResponder*)arg1 ;
-(void)unregisterReactorForKeyCommands:(UIResponder*)arg1 ;
-(id)combinedKeyCommands;
-(id)init;
-(void)dealloc;
-(id)nextResponder;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)keyCommands;
@end

