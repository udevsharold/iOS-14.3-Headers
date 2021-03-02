/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSArray, NSXPCConnection, NSFileAccessNode, NSMutableSet, NSMutableDictionary;

@interface NSFileSubarbitrationClaim : NSFileAccessClaim {

	NSArray* _readingURLs;
	unsigned long long _readingOptions;
	NSArray* _writingURLs;
	unsigned long long _writingOptions;
	NSXPCConnection* _subarbiterConnection;
	NSArray* _readingLocations;
	NSArray* _writingLocations;
	NSFileAccessNode* _rootNode;
	NSMutableSet* _forwardedClaimIDs;
	NSMutableDictionary* _readRelinquishmentsByPresenterID;
	NSMutableDictionary* _writeRelinquishmentsByPresenterID;
	BOOL _nullified;

}

@property (readonly) BOOL nullified;                                    //@synthesize nullified=_nullified - In the implementation block
@property (retain) NSXPCConnection * subarbiterConnection;              //@synthesize subarbiterConnection=_subarbiterConnection - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)granted;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)dealloc;
-(void)evaluateNewClaim:(id)arg1 ;
-(void)devalueSelf;
-(void)invokeClaimer;
-(NSXPCConnection *)subarbiterConnection;
-(void)devalueOldClaim:(id)arg1 ;
-(id)initWithReadingURLs:(id)arg1 options:(unsigned long long)arg2 writingURLs:(id)arg3 options:(unsigned long long)arg4 claimer:(/*^block*/id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)forwardUsingConnection:(id)arg1 withServer:(id)arg2 crashHandler:(/*^block*/id)arg3 ;
-(void)forwardRelinquishmentForWritingClaim:(BOOL)arg1 withID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 toPresenter:(id)arg6 usingReplySender:(/*^block*/id)arg7 ;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)forwardReacquisitionForWritingClaim:(BOOL)arg1 withID:(n@)arg2 toPresenterForID:(id)arg3 usingReplySender:(/*^block*/id)arg4 ;
-(void)revoked;
-(id)relinquishmentForWrite:(BOOL)arg1 toPresenterForID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)nullified;
-(void)setSubarbiterConnection:(NSXPCConnection *)arg1 ;
@end
