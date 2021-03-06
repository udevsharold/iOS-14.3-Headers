/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {

	OADRotation3D* mRotation;
	int mCameraType;
	float mFieldOfView;
	float mZoom;

}
-(float)zoom;
-(id)rotation;
-(id)init;
-(void)setRotation:(id)arg1 ;
-(void)setZoom:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)fieldOfView;
-(unsigned long long)hash;
-(id)description;
-(void)setCameraType:(int)arg1 ;
-(void)setFieldOfView:(float)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)cameraType;
@end

