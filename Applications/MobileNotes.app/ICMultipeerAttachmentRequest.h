/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/ICMultipeerResourceRequest.h>

@class ICAttachment;

@interface ICMultipeerAttachmentRequest : ICMultipeerResourceRequest {

	ICAttachment* _attachment;

}

@property (retain) ICAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)attachment;
-(void)startRequest;
-(id)note;
@end

