/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIQueuingScrollViewDelegate <NSObject>
@required
-(void)queuingScrollView:(id)arg1 willManuallyScroll:(char)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(char)arg5;
-(void)queuingScrollView:(id)arg1 didCommitManualScroll:(char)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(int)arg5 animated:(char)arg6 canComplete:(char)arg7;
-(void)queuingScrollView:(id)arg1 didEndManualScroll:(char)arg2 toRevealView:(id)arg3 direction:(int)arg4 animated:(char)arg5 didFinish:(char)arg6 didComplete:(char)arg7;
-(void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
-(void)queuingScrollViewDidFinishScrolling:(id)arg1;
-(char)queuingScrollViewShouldLayoutSubviews:(id)arg1;

@end

