/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NavContainerBannerAction : NSObject <NSCopying> {

	NSString* _title;
	/*^block*/id _actionHandler;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
@end

