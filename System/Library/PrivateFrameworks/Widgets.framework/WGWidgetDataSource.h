/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_WGDataSource.h>
#import <libobjc.A.dylib/WGDataSource.h>

@class NSString, _WGConcreteDataSource, NSArray;

@interface WGWidgetDataSource : NSObject <_WGDataSource, WGDataSource> {

	NSString* _dataSourceIdentifier;
	_WGConcreteDataSource* _concreteDataSource;

}

@property (setter=_setConcreteDataSource:,getter=_concreteDataSource,nonatomic,retain) _WGConcreteDataSource * concreteDataSource;              //@synthesize concreteDataSource=_concreteDataSource - In the implementation block
@property (nonatomic,readonly) NSArray * widgetIdentifiers; 
@property (nonatomic,readonly) NSString * dataSourceIdentifier;                                                                                 //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * parentDataSourceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeWidgetObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeDatumWithIdentifier:(id)arg1 ;
-(void)replaceWithDatum:(id)arg1 ;
-(id)widgetDatumWithIdentifier:(id)arg1 ;
-(NSString *)dataSourceIdentifier;
-(NSArray *)widgetIdentifiers;
-(NSString *)description;
-(NSString *)parentDataSourceIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setConcreteDataSource:(id)arg1 ;
-(id)_concreteDataSource;
-(void)addWidgetObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

