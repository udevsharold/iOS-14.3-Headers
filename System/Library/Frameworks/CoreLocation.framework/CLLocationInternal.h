/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationMatchInfo, _CLLocationGroundAltitude, NSData, _CLLocationFusionInfo;

@interface CLLocationInternal : NSObject {

	SCD_Struct_CL3 fLocation;
	CLLocationMatchInfo* fMatchInfo;
	_CLLocationGroundAltitude* fGroundAltitude;
	double fTrustedTimestamp;
	NSData* fCoarseMetaData;
	_CLLocationFusionInfo* fFusionInfo;
	double fRawHorizontalAccuracy;
	double fRawCourseAccuracy;

}
-(id)initWithClientLocation:(SCD_Struct_CL20)arg1 clientLocationPrivate:(SCD_Struct_CL32)arg2 coarseMetaData:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL20)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawCourseAccuracy:(double)arg7 coarseMetaData:(id)arg8 ;
-(id)initWithClientLocation:(SCD_Struct_CL20)arg1 coarseMetaData:(id)arg2 ;
-(void)dealloc;
-(id)initWithClientLocation:(SCD_Struct_CL20)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 ;
-(id)initWithClientLocation:(SCD_Struct_CL20)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawCourseAccuracy:(double)arg7 ;
-(id)initWithClientLocation:(SCD_Struct_CL20)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL20)arg1 clientLocationPrivate:(SCD_Struct_CL32)arg2 ;
@end
