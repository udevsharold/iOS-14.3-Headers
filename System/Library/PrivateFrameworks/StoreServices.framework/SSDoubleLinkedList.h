/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSDoubleLinkedListNode, NSString, NSArray;

@interface SSDoubleLinkedList : NSObject {

	unsigned long long _count;
	SSDoubleLinkedListNode* _head;
	SSDoubleLinkedListNode* _tail;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                  //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allNodes; 
@property (nonatomic,readonly) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * head;              //@synthesize head=_head - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * tail;              //@synthesize tail=_tail - In the implementation block
-(void)setHead:(SSDoubleLinkedListNode *)arg1 ;
-(void)removeAllNodes;
-(NSString *)listIdentifier;
-(id)appendObject:(id)arg1 ;
-(id)init;
-(void)setListIdentifier:(NSString *)arg1 ;
-(SSDoubleLinkedListNode *)head;
-(id)insertObject:(id)arg1 ;
-(void)appendNode:(id)arg1 ;
-(id)description;
-(void)removeNode:(id)arg1 ;
-(void)setTail:(SSDoubleLinkedListNode *)arg1 ;
-(SSDoubleLinkedListNode *)tail;
-(unsigned long long)count;
-(NSArray *)allNodes;
-(void)insertNode:(id)arg1 ;
@end

