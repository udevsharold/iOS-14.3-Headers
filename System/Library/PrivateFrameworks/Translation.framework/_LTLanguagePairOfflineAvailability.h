/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _LTLocalePair, NSString;

@interface _LTLanguagePairOfflineAvailability : NSObject <NSSecureCoding> {

	BOOL _needsUpdate;
	unsigned long long _pairState;
	_LTLocalePair* _pair;
	NSString* _sourceASRState;
	NSString* _targetASRState;
	NSString* _mtState;
	NSString* _sourceTTSState;
	NSString* _targetTTSState;

}

@property (assign,nonatomic) unsigned long long pairState;              //@synthesize pairState=_pairState - In the implementation block
@property (nonatomic,retain) _LTLocalePair * pair;                      //@synthesize pair=_pair - In the implementation block
@property (nonatomic,retain) NSString * sourceASRState;                 //@synthesize sourceASRState=_sourceASRState - In the implementation block
@property (nonatomic,retain) NSString * targetASRState;                 //@synthesize targetASRState=_targetASRState - In the implementation block
@property (nonatomic,retain) NSString * mtState;                        //@synthesize mtState=_mtState - In the implementation block
@property (nonatomic,retain) NSString * sourceTTSState;                 //@synthesize sourceTTSState=_sourceTTSState - In the implementation block
@property (nonatomic,retain) NSString * targetTTSState;                 //@synthesize targetTTSState=_targetTTSState - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                          //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(BOOL)supportsSecureCoding;
-(_LTLocalePair *)pair;
-(void)setPair:(_LTLocalePair *)arg1 ;
-(unsigned long long)pairState;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)mtState;
-(id)description;
-(NSString *)sourceASRState;
-(NSString *)targetASRState;
-(NSString *)sourceTTSState;
-(void)setSourceTTSState:(NSString *)arg1 ;
-(NSString *)targetTTSState;
-(void)setTargetTTSState:(NSString *)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(id)initWithLocales:(id)arg1 ;
-(void)setMtState:(NSString *)arg1 ;
-(void)setSourceASRState:(NSString *)arg1 ;
-(void)setTargetASRState:(NSString *)arg1 ;
-(void)setPairState:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

