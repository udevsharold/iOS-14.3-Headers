/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, BSServiceConnectionEndpoint;


@protocol CNUIUserActionContext <NSObject>
@property (nonatomic,readonly) id<CNUIUserActionURLOpener> urlOpener; 
@property (nonatomic,readonly) id<CNUIUserActionUserActivityOpener> userActivityOpener; 
@property (nonatomic,readonly) id<CNUIUserActionDialRequestOpener> dialRequestOpener; 
@property (nonatomic,readonly) id<CNUIUserActionRecorder> actionRecorder; 
@property (nonatomic,readonly) id<CNUIUserActionCurator> actionCurator; 
@property (nonatomic,copy) NSString * channelIdentifier; 
@property (nonatomic,copy) BSServiceConnectionEndpoint * connectionEndpoint; 
@required
-(id<CNUIUserActionURLOpener>)urlOpener;
-(id<CNUIUserActionCurator>)actionCurator;
-(id<CNUIUserActionUserActivityOpener>)userActivityOpener;
-(id<CNUIUserActionDialRequestOpener>)dialRequestOpener;
-(id<CNUIUserActionRecorder>)actionRecorder;
-(void)setChannelIdentifier:(id)arg1;
-(BSServiceConnectionEndpoint *)connectionEndpoint;
-(void)setConnectionEndpoint:(id)arg1;
-(NSString *)channelIdentifier;

@end
