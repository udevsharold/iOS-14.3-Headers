/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLProtocolInternal, NSURLRequest, NSCachedURLResponse;

@interface NSURLProtocol : NSObject {

	NSURLProtocolInternal* _internal;

}

@property (retain,readonly) id<NSURLProtocolClient> client; 
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSCachedURLResponse * cachedResponse; 
+(id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1 ;
+(Class)_protocolClassForRequest:(id)arg1 skipAppSSO:(BOOL)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 task:(id)arg2 ;
+(BOOL)registerClass:(Class)arg1 ;
+(void)removePropertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3 ;
+(BOOL)canInitWithTask:(id)arg1 ;
+(void)unregisterClass:(Class)arg1 ;
+(id)propertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(Class)_protocolClassForRequest:(id)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
-(void)startLoading;
-(id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(id)init;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(NSURLRequest *)request;
-(void)dealloc;
-(NSCachedURLResponse *)cachedResponse;
-(void)stopLoading;
-(id<NSURLProtocolClient>)client;
@end

