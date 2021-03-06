/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FigCaptureSessionPreviewTapDelegate;
#import <Celestial/Celestial-Structs.h>
@interface FigCaptureSessionProxy : NSObject {

	OpaqueFigCaptureSessionRef _session;
	long long _identifier;
	char _previewTapOpened;
	id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;

}

@property (readonly) long long identifier; 
+(void)initialize;
-(void)dealloc;
-(long long)identifier;
-(long)openPreviewTapWithDelegate:(id)arg1 ;
-(void)closePreviewTap;
-(id)initWithFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 identifier:(long long)arg2 ;
@end

