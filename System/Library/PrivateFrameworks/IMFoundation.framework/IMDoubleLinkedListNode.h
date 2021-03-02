/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDoubleLinkedListNode : NSObject {

	IMDoubleLinkedListNode* _prev;
	IMDoubleLinkedListNode* _next;
	id _object;

}

@property (retain) IMDoubleLinkedListNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (retain) IMDoubleLinkedListNode * next;              //@synthesize next=_next - In the implementation block
@property (retain) id object;                                  //@synthesize object=_object - In the implementation block
-(IMDoubleLinkedListNode *)next;
-(void)orphan;
-(void)setNext:(IMDoubleLinkedListNode *)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(IMDoubleLinkedListNode *)prev;
-(void)setPrev:(IMDoubleLinkedListNode *)arg1 ;
-(void)removeFromList;
@end
