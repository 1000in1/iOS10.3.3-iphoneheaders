/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextEffectsWindow.h>

@interface UIRemoteKeyboardWindow : UITextEffectsWindow {

	char _arePlaceholdersInitialised;

}
+(id)remoteKeyboardWindowForScreen:(id)arg1 create:(char)arg2 ;
-(void)invalidate;
-(void)dealloc;
-(void)setWindowLevel:(float)arg1 ;
-(char)_isWindowServerHostingManaged;
-(char)_isHostedInAnotherProcess;
-(void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(char)arg3 duration:(double)arg4 force:(char)arg5 isRotating:(char)arg6 ;
-(char)_wantsSceneAssociation;
-(id)_newSceneLayer;
-(void)_attachSceneLayer;
-(void)_detachSceneLayer;
-(CGAffineTransform)_viewTransformForInterfaceOrientation:(int)arg1 ;
-(char)_alwaysGetsContexts;
-(char)_usesWindowServerHitTesting;
-(char)_matchingOptions:(id)arg1 ;
-(char)_isFullscreen;
-(char)_isTextEffectsWindowNotificationOwner;
-(id)_initBasicWithScreen:(id)arg1 options:(id)arg2 ;
@end

