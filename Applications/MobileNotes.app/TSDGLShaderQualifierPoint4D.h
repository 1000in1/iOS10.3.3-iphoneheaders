/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier {

	SCD_Struct_IC8 _GLPoint4DValue;
	SCD_Struct_IC8 _proposedGLPoint4DValue;

}

@property (getter=LPoint4DValue,nonatomic,readonly) SCD_Struct_IC8 GLPoint4DValue;              //@synthesize GLPoint4DValue=_GLPoint4DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_IC8 proposedGLPoint4DValue;                             //@synthesize proposedGLPoint4DValue=_proposedGLPoint4DValue - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_IC8)GLPoint4DValue;
-(void)setProposedGLPoint4DValue:(SCD_Struct_IC8)arg1 ;
-(SCD_Struct_IC8)proposedGLPoint4DValue;
-(id)description;
@end

