/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSURLBagContext, SSNetworkConstraints, ISURLBagBackend, NSString, NSArray, NSSet, NSDictionary;

@interface ISURLBag : NSObject {

	SSURLBagContext* _context;
	SSNetworkConstraints* _defaultConstraints;
	ISURLBagBackend* _bagBackend;
	NSString* _bagBackendKey;
	NSArray* _guidPatterns;
	NSSet* _guidSchemes;
	NSDictionary* _headerPatterns;
	double _invalidationTime;
	BOOL _loadedFromDiskCache;
	NSString* _storeFrontIdentifier;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,nonatomic) double invalidationTime;                        //@synthesize invalidationTime=_invalidationTime - In the implementation block
@property (assign,nonatomic) BOOL loadedFromDiskCache;                       //@synthesize loadedFromDiskCache=_loadedFromDiskCache - In the implementation block
@property (nonatomic,copy) NSString * storeFrontIdentifier;                  //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) SSURLBagContext * URLBagContext; 
@property (nonatomic,readonly) NSDictionary * URLBagDictionary; 
@property (nonatomic,readonly) long long versionIdentifier; 
@property (readonly) NSSet * availableStorefrontItemKinds; 
+(id)storeFrontURLBagKeyForItemKind:(id)arg1 ;
+(id)_sharedBagBackend;
+(void)_loadItemKindURLBagKeyMap;
+(id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2 ;
+(id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2 ;
+(BOOL)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2 ;
+(id)urlBagForContext:(id)arg1 ;
+(id)urlForKey:(id)arg1 inBagContext:(id)arg2 ;
+(BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2 ;
+(id)valueForKey:(id)arg1 inBagContext:(id)arg2 ;
-(SSURLBagContext *)URLBagContext;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setLoadedFromDiskCache:(BOOL)arg1 ;
-(long long)versionIdentifier;
-(id)init;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)arg1 ;
-(id)_copyGUIDSchemesFromBagBackend;
-(id)URLForURL:(id)arg1 clientIdentifier:(id)arg2 ;
-(BOOL)urlIsTrusted:(id)arg1 ;
-(id)initWithRawDictionary:(id)arg1 ;
-(double)invalidationTime;
-(id)copyExtraHeadersForURL:(id)arg1 ;
-(BOOL)shouldSendGUIDForURL:(id)arg1 ;
-(NSString *)storeFrontIdentifier;
-(id)urlForKey:(id)arg1 ;
-(BOOL)isValid;
-(BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2 ;
-(id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(long long)arg2 ;
-(id)_copyGUIDPatternsFromBagBackend;
-(void)_setBagBackendWithDictionary:(id)arg1 ;
-(void)setInvalidationTime:(double)arg1 ;
-(void)setInvalidationTimeWithExprationInterval:(double)arg1 ;
-(void)_preprocessURLResolutionCacheDictionary:(id)arg1 ;
-(BOOL)loadedFromDiskCache;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)sanitizedURLForURL:(id)arg1 ;
-(id)initWithURLBagContext:(id)arg1 ;
-(id)_copyHeaderPatternsFromBagBackend;
-(void)_toggleStopSendingLocalCookies;
-(NSDictionary *)URLBagDictionary;
-(id)networkConstraintsForDownloadKind:(id)arg1 ;
-(void)_writeURLResolutionCacheFile;
-(id)valueForKey:(id)arg1 ;
-(void)setURLBagContext:(SSURLBagContext *)arg1 ;
-(NSSet *)availableStorefrontItemKinds;
-(void)_writeNetworkConstraintsCacheFile;
-(id)_networkConstraintsCachePath;
@end

