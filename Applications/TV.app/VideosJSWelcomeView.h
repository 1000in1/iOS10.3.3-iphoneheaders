/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TV/VideosJSWelcomeView.h>

@protocol VideosJSWelcomeView <JSExport>
@property (nonatomic,readonly) char hasShown; 
@property (readonly) char isShowing; 
@required
-(char)hasShown;
-(void)show:(id)arg1;
-(char)isShowing;

@end


@interface VideosJSWelcomeView : IKJSObject <VideosJSWelcomeView> {

	char _isShowing;

}

@property (assign) char isShowing;                         //@synthesize isShowing=_isShowing - In the implementation block
@property (nonatomic,readonly) char hasShown; 
-(char)hasShown;
-(void)show:(id)arg1 ;
-(char)isShowing;
-(void)setIsShowing:(char)arg1 ;
@end

