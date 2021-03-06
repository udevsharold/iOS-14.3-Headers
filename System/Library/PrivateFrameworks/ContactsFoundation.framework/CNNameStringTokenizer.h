/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSObject, CNUnfairLock;

@interface CNNameStringTokenizer : NSObject {

	CFStringTokenizerRef _tokenizer;
	NSObject*<OS_dispatch_queue> _syncQueue;
	CNUnfairLock* _lock;

}

@property (nonatomic,readonly) CFStringTokenizerRef tokenizer;              //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,readonly) CNUnfairLock * lock;                         //@synthesize lock=_lock - In the implementation block
+(id)tokenizeNameString:(id)arg1 ;
+(id)tokenizeNameString:(id)arg1 usingLocale:(id)arg2 inferredNameOrder:(long long*)arg3 ;
+(void)setInferredNameOrder:(long long*)arg1 toTokenizerNameOrder:(int)arg2 ;
-(id)initWithLocale:(id)arg1 ;
-(CFStringTokenizerRef)tokenizer;
-(id)init;
-(void)dealloc;
-(CNUnfairLock *)lock;
-(id)tokenizeNameString:(id)arg1 inferredNameOrder:(long long*)arg2 ;
@end

