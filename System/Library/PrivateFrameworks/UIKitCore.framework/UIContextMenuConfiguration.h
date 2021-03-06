/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@interface UIContextMenuConfiguration : NSObject {

	id<NSCopying> _identifier;
	/*^block*/id _previewProvider;
	/*^block*/id _actionProvider;

}

@property (nonatomic,copy) id<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id previewProvider;                    //@synthesize previewProvider=_previewProvider - In the implementation block
@property (nonatomic,copy) id actionProvider;                     //@synthesize actionProvider=_actionProvider - In the implementation block
+(id)configurationWithIdentifier:(id)arg1 previewProvider:(/*^block*/id)arg2 actionProvider:(/*^block*/id)arg3 ;
-(void)setActionProvider:(id)arg1 ;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)identifier;
-(id)actionProvider;
-(id)previewProvider;
-(void)setPreviewProvider:(id)arg1 ;
@end

