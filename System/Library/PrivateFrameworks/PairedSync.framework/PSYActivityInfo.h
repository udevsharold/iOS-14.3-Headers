/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSArray;

@interface PSYActivityInfo : NSObject <NSSecureCoding> {

	NSString* _label;
	NSString* _machServiceName;
	NSString* _priority;
	NSNumber* _timeoutSeconds;
	NSArray* _sessionTypes;
	NSString* _backboardPrelaunchBundleIdentifier;

}

@property (nonatomic,copy) NSString * backboardPrelaunchBundleIdentifier;              //@synthesize backboardPrelaunchBundleIdentifier=_backboardPrelaunchBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                 //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,copy) NSString * priority;                                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSNumber * timeoutSeconds;                                  //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,copy) NSArray * sessionTypes;                                     //@synthesize sessionTypes=_sessionTypes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activityWithPlist:(id)arg1 ;
-(void)setPriority:(NSString *)arg1 ;
-(NSNumber *)timeoutSeconds;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(void)setBackboardPrelaunchBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setTimeoutSeconds:(NSNumber *)arg1 ;
-(NSArray *)sessionTypes;
-(void)setLabel:(NSString *)arg1 ;
-(void)setSessionTypes:(NSArray *)arg1 ;
-(NSString *)label;
-(NSString *)priority;
-(NSString *)backboardPrelaunchBundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end

