/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface NotesCIDURLProtocol : NSURLProtocol
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)registerDataProvider:(id)arg1 forCIDURL:(id)arg2 ;
+(void)unregisterDataProviderForCIDURL:(id)arg1 ;
-(void)startLoading;
-(void)stopLoading;
@end

