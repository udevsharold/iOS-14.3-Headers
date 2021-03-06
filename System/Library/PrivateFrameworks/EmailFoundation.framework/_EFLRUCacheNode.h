/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _EFLRUCacheNode : NSObject {

	id _element;
	id _key;
	_EFLRUCacheNode* _previous;
	_EFLRUCacheNode* _next;

}

@property (nonatomic,readonly) id element;                            //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) id key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) _EFLRUCacheNode * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,retain) _EFLRUCacheNode * next;                  //@synthesize next=_next - In the implementation block
-(id)key;
-(_EFLRUCacheNode *)next;
-(void)setPrevious:(_EFLRUCacheNode *)arg1 ;
-(void)setNext:(_EFLRUCacheNode *)arg1 ;
-(id)initWithKey:(id)arg1 element:(id)arg2 ;
-(_EFLRUCacheNode *)previous;
-(id)element;
@end

