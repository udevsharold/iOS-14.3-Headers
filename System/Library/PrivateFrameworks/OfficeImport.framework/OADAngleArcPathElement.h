/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADAngleArcPathElement : OADPathElement {

	OADAdjustPoint mCenter;
	OADAdjustPoint mSemiaxes;
	OADAdjustCoord mStartAngle;
	OADAdjustCoord mAngleLength;
	BOOL mConnectedToPrevious;

}
-(OADAdjustPoint)center;
-(OADAdjustCoord)startAngle;
-(id)initWithCenter:(OADAdjustPoint)arg1 semiaxes:(OADAdjustPoint)arg2 startAngle:(OADAdjustCoord)arg3 angleLength:(OADAdjustCoord)arg4 connectedToPrevious:(BOOL)arg5 ;
-(OADAdjustPoint)semiaxes;
-(OADAdjustCoord)angleLength;
-(BOOL)connectedToPrevious;
@end

