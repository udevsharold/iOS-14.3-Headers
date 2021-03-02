/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLBackgroundTask.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSURL, NSString;

@interface HMIDESBackgroundTask : MLBackgroundTask <HMFLogging> {

	NSURL* _url;

}

@property (readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
-(id)activityForScheduling;
-(id)initWithURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)encodeWithCoder:(id)arg1 ;
@end
