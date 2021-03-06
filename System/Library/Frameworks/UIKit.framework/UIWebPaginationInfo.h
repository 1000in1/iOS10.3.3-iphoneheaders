/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebDocumentView;
#import <UIKit/UIKit-Structs.h>
@class NSObject, NSArray, UIWebDocumentView;

@interface UIWebPaginationInfo : NSObject {

	NSObject*<WebDocumentView> _documentView;
	float _scaleFactor;
	CGSize _layoutSize;
	NSArray* _pageRects;
	UIWebDocumentView* _webDocumentView;

}

@property (nonatomic,readonly) unsigned pageCount; 
@property (nonatomic,readonly) float lastPageHeight; 
@property (nonatomic,retain) UIWebDocumentView * webDocumentView;              //@synthesize webDocumentView=_webDocumentView - In the implementation block
-(void)dealloc;
-(id)documentView;
-(id)initWithDocumentView:(id)arg1 scaleFactor:(float)arg2 layoutSize:(CGSize)arg3 pageRects:(id)arg4 ;
-(void)setWebDocumentView:(UIWebDocumentView *)arg1 ;
-(id)pageRects;
-(float)scaleFactor;
-(CGSize)layoutSize;
-(unsigned)pageCount;
-(float)lastPageHeight;
-(CGSize)sizeForPageAtIndex:(int)arg1 ;
-(UIWebDocumentView *)webDocumentView;
@end

