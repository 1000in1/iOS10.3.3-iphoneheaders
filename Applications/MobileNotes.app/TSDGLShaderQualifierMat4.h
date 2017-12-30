/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat4 : TSDGLShaderQualifier {

	CATransform3D _transform3D;
	CATransform3D _proposedTransform3D;

}

@property (nonatomic,readonly) CATransform3D transform3D;                    //@synthesize transform3D=_transform3D - In the implementation block
@property (assign,nonatomic) CATransform3D proposedTransform3D;              //@synthesize proposedTransform3D=_proposedTransform3D - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(id)initWithTransform3D:(CATransform3D)arg1 ;
-(void)setProposedTransform3D:(CATransform3D)arg1 ;
-(CATransform3D)proposedTransform3D;
-(id)description;
-(CATransform3D)transform3D;
@end

