/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PQLConnection, NSString, CKDClientContext;

@interface CKDKeyValueDiskCache : NSObject {

	double _expirationTimeout;
	PQLConnection* _db;
	NSString* _identifier;
	CKDClientContext* _context;

}

@property (nonatomic,retain) PQLConnection * db;                             //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double expirationTimeout;                       //@synthesize expirationTimeout=_expirationTimeout - In the implementation block
-(void)dealloc;
-(void)setDb:(PQLConnection *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)cachedValueForKey:(id)arg1 ;
-(NSString *)identifier;
-(void)setContext:(CKDClientContext *)arg1 ;
-(id)dbPath;
-(PQLConnection *)db;
-(CKDClientContext *)context;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(void)setExpirationTimeout:(double)arg1 ;
-(double)expirationTimeout;
-(BOOL)setupCacheWithError:(id*)arg1 ;
-(void)_garbageCollectExpiredEntries;
-(void)removeCachedValueForKey:(id)arg1 ;
-(void)deleteCachedValuesBecauseOfLowDisk;
@end

