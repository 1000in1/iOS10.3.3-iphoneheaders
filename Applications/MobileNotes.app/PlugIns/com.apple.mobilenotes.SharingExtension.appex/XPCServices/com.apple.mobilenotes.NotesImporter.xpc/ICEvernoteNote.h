/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/XPCServices/com.apple.mobilenotes.NotesImporter.xpc/com.apple.mobilenotes.NotesImporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray;

@interface ICEvernoteNote : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _content;
	NSDate* _created;
	NSDate* _updated;
	NSArray* _resources;

}

@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * content;               //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSDate * created;                 //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSDate * updated;                 //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSArray * resources;              //@synthesize resources=_resources - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)content;
-(NSString *)title;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(NSDate *)updated;
-(void)setUpdated:(NSDate *)arg1 ;
-(void)setCreated:(NSDate *)arg1 ;
-(NSDate *)created;
@end

