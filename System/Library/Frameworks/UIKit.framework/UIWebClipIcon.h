/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSURL;

@interface UIWebClipIcon : NSObject {

	char _precomposed;
	char _siteWide;
	CGSize _bestSize;
	NSURL* _url;

}

@property (assign,getter=isPrecomposed,nonatomic) char precomposed;              //@synthesize precomposed=_precomposed - In the implementation block
@property (assign,getter=isSiteWide,nonatomic) char siteWide;                    //@synthesize siteWide=_siteWide - In the implementation block
@property (assign,nonatomic) CGSize bestSize;                                    //@synthesize bestSize=_bestSize - In the implementation block
@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(char)isSiteWide;
-(CGSize)bestSize;
-(char)isPrecomposed;
-(int)compare:(id)arg1 preferringDeviceIconSizes:(char)arg2 ;
-(void)setPrecomposed:(char)arg1 ;
-(void)setSiteWide:(char)arg1 ;
-(void)setBestSize:(CGSize)arg1 ;
@end
