/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TRITask;
@class NSNumber, NSDate, NSArray;

@interface TRITaskRecord : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _taskId;
	id<TRITask> _task;
	NSDate* _startDate;
	NSArray* _dependencies;
	NSArray* _tags;

}

@property (nonatomic,readonly) NSNumber * taskId;                   //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) id<TRITask> task;                    //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSArray * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,readonly) NSArray * tags;                      //@synthesize tags=_tags - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)taskRecordWithTaskId:(id)arg1 task:(id)arg2 startDate:(id)arg3 dependencies:(id)arg4 tags:(id)arg5 ;
-(NSNumber *)taskId;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyWithReplacementStartDate:(id)arg1 ;
-(NSArray *)dependencies;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)startDate;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)tags;
-(id<TRITask>)task;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTaskId:(id)arg1 task:(id)arg2 startDate:(id)arg3 dependencies:(id)arg4 tags:(id)arg5 ;
-(BOOL)isEqualToTaskRecord:(id)arg1 ;
-(id)copyWithReplacementTaskId:(id)arg1 ;
-(id)copyWithReplacementTask:(id)arg1 ;
-(id)copyWithReplacementDependencies:(id)arg1 ;
-(id)copyWithReplacementTags:(id)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
@end

