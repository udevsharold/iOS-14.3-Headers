/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDiffableDataSourceSectionSnapshot, NSOrderedCollectionDifference;

@interface _UIDiffableDataSourceSectionTransaction : NSObject {

	id _sectionIdentifier;
	NSDiffableDataSourceSectionSnapshot* _initialSnapshot;
	NSDiffableDataSourceSectionSnapshot* _finalSnapshot;
	NSOrderedCollectionDifference* _difference;

}

@property (nonatomic,readonly) id sectionIdentifier;                                               //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSDiffableDataSourceSectionSnapshot * initialSnapshot;              //@synthesize initialSnapshot=_initialSnapshot - In the implementation block
@property (nonatomic,readonly) NSDiffableDataSourceSectionSnapshot * finalSnapshot;                //@synthesize finalSnapshot=_finalSnapshot - In the implementation block
@property (nonatomic,readonly) NSOrderedCollectionDifference * difference;                         //@synthesize difference=_difference - In the implementation block
-(NSDiffableDataSourceSectionSnapshot *)initialSnapshot;
-(id)initWithSectionIdentifier:(id)arg1 initialSnapshot:(id)arg2 finalSnapshot:(id)arg3 difference:(id)arg4 ;
-(id)sectionIdentifier;
-(NSDiffableDataSourceSectionSnapshot *)finalSnapshot;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSOrderedCollectionDifference *)difference;
@end
