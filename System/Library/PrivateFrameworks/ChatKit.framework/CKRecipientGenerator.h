/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CKRecipientGenerator : NSObject {

	NSArray* _searchABPropertyTypes;

}

@property (nonatomic,retain) NSArray * searchABPropertyTypes;              //@synthesize searchABPropertyTypes=_searchABPropertyTypes - In the implementation block
+(id)sharedRecipientGenerator;
-(void)getAddressForContact:(id)arg1 address:(id*)arg2 kind:(unsigned long long*)arg3 ;
-(void)setSearchABPropertyTypes:(NSArray *)arg1 ;
-(NSArray *)searchABPropertyTypes;
-(void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4 ;
-(id)recipientWithAddress:(id)arg1 ;
-(id)recipientWithContact:(id)arg1 ;
-(id)recipientWithContactProperty:(id)arg1 ;
@end

