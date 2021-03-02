/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEFilterVerdict : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _shouldReport;
	BOOL _needRules;
	BOOL _drop;
	BOOL _remediate;
	BOOL _urlAppendString;
	BOOL _pause;
	NSString* _remediationURLMapKey;
	NSString* _remediationButtonTextMapKey;
	NSString* _urlAppendStringMapKey;

}

@property (assign) BOOL needRules;                                      //@synthesize needRules=_needRules - In the implementation block
@property (assign) BOOL drop;                                           //@synthesize drop=_drop - In the implementation block
@property (assign) BOOL remediate;                                      //@synthesize remediate=_remediate - In the implementation block
@property (assign) BOOL urlAppendString;                                //@synthesize urlAppendString=_urlAppendString - In the implementation block
@property (assign) BOOL pause;                                          //@synthesize pause=_pause - In the implementation block
@property (retain) NSString * remediationURLMapKey;                     //@synthesize remediationURLMapKey=_remediationURLMapKey - In the implementation block
@property (retain) NSString * remediationButtonTextMapKey;              //@synthesize remediationButtonTextMapKey=_remediationButtonTextMapKey - In the implementation block
@property (retain) NSString * urlAppendStringMapKey;                    //@synthesize urlAppendStringMapKey=_urlAppendStringMapKey - In the implementation block
@property (readonly) long long filterAction; 
@property (assign) BOOL shouldReport;                                   //@synthesize shouldReport=_shouldReport - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned)statisticsReportFrequencyToMilliseconds:(long long)arg1 ;
+(id)statisticsReportFrequencyToString:(long long)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)pause;
-(BOOL)remediate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)needRules;
-(BOOL)shouldReport;
-(void)setShouldReport:(BOOL)arg1 ;
-(long long)filterAction;
-(NSString *)remediationURLMapKey;
-(NSString *)remediationButtonTextMapKey;
-(BOOL)urlAppendString;
-(NSString *)urlAppendStringMapKey;
-(void)setUrlAppendString:(BOOL)arg1 ;
-(void)setNeedRules:(BOOL)arg1 ;
-(id)initWithDrop:(BOOL)arg1 remediate:(BOOL)arg2 ;
-(void)setRemediationURLMapKey:(NSString *)arg1 ;
-(void)setRemediationButtonTextMapKey:(NSString *)arg1 ;
-(id)initWithPause:(BOOL)arg1 ;
-(void)setUrlAppendStringMapKey:(NSString *)arg1 ;
-(BOOL)drop;
-(void)setRemediate:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setPause:(BOOL)arg1 ;
-(void)setDrop:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
