/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICDeviceInfo : NSObject <NSCopying> {

	char _upgraded;
	char _upgradable;
	char _isOSXDevice;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char upgraded;                 //@synthesize upgraded=_upgraded - In the implementation block
@property (nonatomic,readonly) char upgradable;               //@synthesize upgradable=_upgradable - In the implementation block
@property (nonatomic,readonly) char isOSXDevice;              //@synthesize isOSXDevice=_isOSXDevice - In the implementation block
+(void)logDeviceList:(id)arg1 ;
-(char)upgraded;
-(char)upgradable;
-(char)isOSXDevice;
-(id)initWithName:(id)arg1 upgradable:(char)arg2 upgraded:(char)arg3 ;
-(char)shouldBeHidden;
-(id)loggableDescription;
-(id)attributedStringWithAttributes:(id)arg1 asteriskColor:(UIColor*)arg2 ;
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
@end

