/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, ICSpotlightAttributeSet;

@interface ICNoteBaseUserActivityState : NSObject {

	NSDictionary* _contentAttributes;
	ICSpotlightAttributeSet* _attributeSet;

}

@property (nonatomic,retain) ICSpotlightAttributeSet * attributeSet;               //@synthesize attributeSet=_attributeSet - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * contentAttributes;              //@synthesize contentAttributes=_contentAttributes - In the implementation block
-(id)initWithNote:(id)arg1 ;
-(void)updateUserActivity:(id)arg1 ;
-(NSDictionary *)contentAttributes;
-(void)setAttributeSet:(ICSpotlightAttributeSet *)arg1 ;
-(ICSpotlightAttributeSet *)attributeSet;
@end

