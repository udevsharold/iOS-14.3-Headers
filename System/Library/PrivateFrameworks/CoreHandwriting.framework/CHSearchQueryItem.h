/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CHSearchQueryItem : NSObject {

	NSSet* _strokeIdentifiers;

}

@property (nonatomic,copy,readonly) NSSet * strokeIdentifiers;              //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)strokeIdentifiers;
-(id)initWithStrokeIdentifiers:(id)arg1 ;
-(BOOL)isEqualToSearchQueryItem:(id)arg1 ;
@end
