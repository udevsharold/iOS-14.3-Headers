/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CKDiscretionaryOptions : NSObject <NSSecureCoding, NSCoding> {

	BOOL _allowsExpensiveAccess;
	NSString* _applicationBundleIdentifierOverride;
	NSString* _secondarySourceAppplicationBundleId;
	double _timeoutIntervalForResource;
	unsigned long long _discretionaryNetworkBehavior;

}

@property (nonatomic,retain) NSString * applicationBundleIdentifierOverride;               //@synthesize applicationBundleIdentifierOverride=_applicationBundleIdentifierOverride - In the implementation block
@property (nonatomic,retain) NSString * secondarySourceAppplicationBundleId;               //@synthesize secondarySourceAppplicationBundleId=_secondarySourceAppplicationBundleId - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForResource;                            //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL allowsExpensiveAccess;                                   //@synthesize allowsExpensiveAccess=_allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;              //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApplicationBundleIdentifierOverride:(NSString *)arg1 ;
-(unsigned long long)discretionaryNetworkBehavior;
-(void)setSecondarySourceAppplicationBundleId:(NSString *)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleIdentifierOverride;
-(void)setAllowsExpensiveAccess:(BOOL)arg1 ;
-(double)timeoutIntervalForResource;
-(BOOL)allowsExpensiveAccess;
-(NSString *)secondarySourceAppplicationBundleId;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

