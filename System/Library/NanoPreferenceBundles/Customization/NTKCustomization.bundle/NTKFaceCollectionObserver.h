/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKFaceCollectionObserver <NSObject>
@optional
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned)arg3;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned)arg3;
-(void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned)arg3;
-(void)faceCollectionDidReorderFaces:(id)arg1;
-(void)faceCollectionDidLoad:(id)arg1;
-(void)faceCollectionDidReset:(id)arg1;

@end

