/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPreviewInteractionControllerDelegate <NSObject>
@optional
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(char)arg3;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(CGPoint)arg3 inSourceView:(id)arg4;

@required
-(void)previewInteractionController:(id)arg1 commitViewController:(id)arg2;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id*)arg4;

@end

