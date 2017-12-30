/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, GEOSearchCategory, MKLocalSearchCompletion, NSString, UIImage;

@interface BrowseCategory : NSObject {

	unsigned _type;
	NSArray* _subCategories;
	GEOSearchCategory* _category;
	MKLocalSearchCompletion* _searchAutoCompletion;

}

@property (assign,nonatomic) unsigned type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * alternativeName; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) NSArray * subCategories;                                   //@synthesize subCategories=_subCategories - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * category;                                //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) MKLocalSearchCompletion * searchAutoCompletion;              //@synthesize searchAutoCompletion=_searchAutoCompletion - In the implementation block
-(NSArray *)subCategories;
-(id)imageForCarplay:(char)arg1 ;
-(id)imageWithScale:(float)arg1 isCarplay:(char)arg2 ;
-(NSString *)alternativeName;
-(char)directionMode;
-(MKLocalSearchCompletion *)searchAutoCompletion;
-(void)setSearchAutoCompletion:(MKLocalSearchCompletion *)arg1 ;
-(id)description;
-(NSString *)name;
-(void)setCategory:(GEOSearchCategory *)arg1 ;
-(GEOSearchCategory *)category;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(UIImage *)image;
-(id)initWithType:(unsigned)arg1 ;
-(id)initWithCategory:(id)arg1 ;
-(id)imageWithScale:(float)arg1 ;
@end

