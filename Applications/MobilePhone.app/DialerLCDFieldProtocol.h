/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DialerLCDFieldProtocol <NSObject>
@optional
-(void)setName:(id)arg1 numberLabel:(id)arg2 suggestion:(char)arg3;
-(void)setText:(id)arg1 needsFormat:(char)arg2 name:(id)arg3 label:(id)arg4;
-(void)setName:(id)arg1 numberLabel:(id)arg2;
-(void)endEditing;

@required
-(void)insertStringAtCurrentPosition:(id)arg1 deletingPreviousCharacter:(char)arg2;
-(void)setText:(id)arg1 needsFormat:(char)arg2;
-(void)insertStringAtCurrentPosition:(id)arg1;
-(void)deleteCharacter;
-(char)inCallMode;
-(void)setInCallMode:(char)arg1;
-(void)setDelegate:(id)arg1;
-(id)text;
-(void)setHighlighted:(char)arg1;
-(char)highlighted;

@end

