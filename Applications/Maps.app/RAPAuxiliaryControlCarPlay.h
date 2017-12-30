/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPAuxiliaryControl.h>

@class NSString, GEORPCarPlayAuxiliaryControl;

@interface RAPAuxiliaryControlCarPlay : NSObject <RAPAuxiliaryControl> {

	NSString* _ID;
	GEORPCarPlayAuxiliaryControl* _reportAProblemControlMessage;

}

@property (nonatomic,readonly) GEORPCarPlayAuxiliaryControl * reportAProblemControlMessage;              //@synthesize reportAProblemControlMessage=_reportAProblemControlMessage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isSameControlAsControl:(id)arg1 ;
-(GEORPCarPlayAuxiliaryControl *)reportAProblemControlMessage;
-(id)initWithInformationFromDevice:(id)arg1 accessory:(id)arg2 displayController:(id)arg3 ;
@end

