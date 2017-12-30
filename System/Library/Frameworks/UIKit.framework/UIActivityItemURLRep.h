/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject {

	NSURL* _URL;
	UIImage* _thumbnail;
	int _attachmentURLType;

}

@property (nonatomic,retain) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) int attachmentURLType;              //@synthesize attachmentURLType=_attachmentURLType - In the implementation block
-(id)scheme;
-(char)isFileURL;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(UIImage *)thumbnail;
-(int)attachmentURLType;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setAttachmentURLType:(int)arg1 ;
@end

