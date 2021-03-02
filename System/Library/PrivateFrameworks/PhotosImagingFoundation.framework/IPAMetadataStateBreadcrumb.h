/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IPAMetadataStateBreadcrumb : NSObject {

	unsigned _qualityOfService;
	double _timeInterval;
	unsigned long long _threadID;
	NSString* _message;

}

@property (readonly) double timeInterval;                                //@synthesize timeInterval=_timeInterval - In the implementation block
@property (readonly) unsigned long long threadID;                        //@synthesize threadID=_threadID - In the implementation block
@property (readonly) unsigned qualityOfService;                          //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (copy,readonly) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (copy,readonly) NSString * breadcrumbDescription; 
-(NSString *)message;
-(double)timeInterval;
-(unsigned)qualityOfService;
-(unsigned long long)threadID;
-(id)initWithTimeInterval:(double)arg1 message:(id)arg2 ;
-(NSString *)breadcrumbDescription;
@end
