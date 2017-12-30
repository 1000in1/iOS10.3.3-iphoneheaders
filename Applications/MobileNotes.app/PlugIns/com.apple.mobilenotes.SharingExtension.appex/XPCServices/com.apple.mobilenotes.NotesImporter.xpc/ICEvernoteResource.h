/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/XPCServices/com.apple.mobilenotes.NotesImporter.xpc/com.apple.mobilenotes.NotesImporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface ICEvernoteResource : NSObject <NSSecureCoding> {

	char _isAttachment;
	NSString* _mime;
	NSString* _fileName;
	NSData* _data;
	NSString* _md5Hash;
	float _imageWidth;
	float _imageHeight;
	double _duration;

}

@property (assign,nonatomic) char isAttachment;                //@synthesize isAttachment=_isAttachment - In the implementation block
@property (nonatomic,retain) NSString * mime;                  //@synthesize mime=_mime - In the implementation block
@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * md5Hash;               //@synthesize md5Hash=_md5Hash - In the implementation block
@property (assign,nonatomic) float imageWidth;                 //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) float imageHeight;                //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) double duration;                  //@synthesize duration=_duration - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)mime;
-(void)setMime:(NSString *)arg1 ;
-(void)setMd5Hash:(NSString *)arg1 ;
-(void)setIsAttachment:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setImageWidth:(float)arg1 ;
-(void)setImageHeight:(float)arg1 ;
-(float)imageWidth;
-(float)imageHeight;
-(char)isAttachment;
-(NSString *)md5Hash;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

