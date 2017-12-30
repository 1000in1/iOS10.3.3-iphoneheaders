/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:31:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/PlugIns/RPVideoEditorExtension.appex/RPVideoEditorExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RPStoreInfo : NSObject {

	NSString* _bundleID;
	NSString* _appName;
	NSString* _author;
	NSString* _itemURL;
	NSArray* _categories;

}

@property (nonatomic,retain) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appName;                //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * author;                 //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * itemURL;                //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSArray * categories;              //@synthesize categories=_categories - In the implementation block
-(id)dictionary;
-(NSArray *)categories;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSString *)appName;
-(NSString *)itemURL;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)setItemURL:(NSString *)arg1 ;
@end

