/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIDiffableDataSourceItemRenderer : NSObject <NSCopying> {

	id _rendererIdentifier;
	Class _cellClass;
	NSString* _cellReuseIdentifier;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) id rendererIdentifier;                       //@synthesize rendererIdentifier=_rendererIdentifier - In the implementation block
@property (nonatomic,readonly) Class cellClass;                             //@synthesize cellClass=_cellClass - In the implementation block
@property (nonatomic,readonly) NSString * cellReuseIdentifier;              //@synthesize cellReuseIdentifier=_cellReuseIdentifier - In the implementation block
@property (nonatomic,readonly) id handler;                                  //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)cellClass;
-(id)rendererIdentifier;
-(NSString *)cellReuseIdentifier;
-(id)initWithIdentifier:(id)arg1 cellClass:(Class)arg2 handler:(/*^block*/id)arg3 cellReuseIdentifier:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 cellClass:(Class)arg2 handler:(/*^block*/id)arg3 ;
@end

