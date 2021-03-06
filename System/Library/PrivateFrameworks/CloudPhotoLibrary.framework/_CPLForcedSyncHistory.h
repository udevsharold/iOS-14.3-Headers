/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CPLScopeFilter, NSString;

@interface _CPLForcedSyncHistory : NSObject {

	BOOL _discarded;
	NSDate* _creationDate;
	CPLScopeFilter* _filter;
	Class _taskClass;
	NSString* _errorDescription;

}

@property (nonatomic,readonly) BOOL discarded;                           //@synthesize discarded=_discarded - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) CPLScopeFilter * filter;                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) Class taskClass;                          //@synthesize taskClass=_taskClass - In the implementation block
@property (nonatomic,readonly) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
-(NSDate *)creationDate;
-(CPLScopeFilter *)filter;
-(NSString *)errorDescription;
-(BOOL)discarded;
-(Class)taskClass;
-(id)descriptionWithNow:(id)arg1 ;
-(id)initWithForcedSyncTask:(id)arg1 discarded:(BOOL)arg2 error:(id)arg3 ;
@end

